@class NSData, FPItem;
@protocol FPXPCAutomaticErrorProxy, FPXEnumerator;

@interface FPDItemIteratorEnumState : NSObject

@property (retain, nonatomic) FPItem *parentItem;
@property (retain, nonatomic) id<FPXPCAutomaticErrorProxy, FPXEnumerator> enumerator;
@property (retain, nonatomic) NSData *nextPage;

- (void).cxx_destruct;

@end
