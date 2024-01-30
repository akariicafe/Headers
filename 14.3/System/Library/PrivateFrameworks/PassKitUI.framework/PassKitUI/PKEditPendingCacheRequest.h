@class NSString, PKPass, NSArray;

@interface PKEditPendingCacheRequest : NSObject

@property (retain, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) PKPass *pass;
@property (nonatomic) BOOL fullPass;
@property (nonatomic) BOOL stacked;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSArray *completionHandlers;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
