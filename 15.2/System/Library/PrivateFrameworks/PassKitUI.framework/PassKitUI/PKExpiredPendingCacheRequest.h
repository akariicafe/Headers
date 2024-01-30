@class NSString, PKPass, NSArray;

@interface PKExpiredPendingCacheRequest : NSObject

@property (retain, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) PKPass *pass;
@property (nonatomic) BOOL fullPass;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSArray *completionHandlers;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
