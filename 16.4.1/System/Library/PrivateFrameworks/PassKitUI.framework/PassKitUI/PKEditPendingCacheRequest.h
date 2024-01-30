@class NSString, PKPass, NSArray;

@interface PKEditPendingCacheRequest : NSObject

@property (retain, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) PKPass *pass;
@property (nonatomic) BOOL fullPass;
@property (nonatomic) BOOL stacked;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSArray *completionHandlers;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
