@class NSURL, NSString, NSDate;

@interface _UINSItemProviderCacheState : NSObject

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *typeIdentifier;
@property (retain, nonatomic) NSDate *expirationDate;

- (void).cxx_destruct;

@end
