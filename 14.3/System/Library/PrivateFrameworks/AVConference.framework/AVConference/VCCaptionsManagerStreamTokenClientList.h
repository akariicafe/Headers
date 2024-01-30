@class NSMutableArray;
@protocol VCCaptionsSource;

@interface VCCaptionsManagerStreamTokenClientList : NSObject {
    long long _streamToken;
}

@property (readonly, nonatomic) id<VCCaptionsSource> captionsSource;
@property (readonly, nonatomic) NSMutableArray *clientContextList;

+ (BOOL)isValidContext:(id)a0;
+ (long long)streamTokenFromClientContext:(id)a0;

- (void)dealloc;
- (void)removeContext:(id)a0;
- (id)newContext;
- (id)initWithStreamToken:(long long)a0 captionsSource:(id)a1;

@end
