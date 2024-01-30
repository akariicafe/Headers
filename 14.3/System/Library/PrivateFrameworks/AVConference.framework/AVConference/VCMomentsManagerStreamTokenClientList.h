@class NSMutableArray;
@protocol VCMomentsMessenger;

@interface VCMomentsManagerStreamTokenClientList : NSObject {
    long long _streamToken;
}

@property (readonly, nonatomic) id<VCMomentsMessenger> messenger;
@property (readonly, nonatomic) NSMutableArray *clientContextList;

+ (BOOL)isValidContext:(id)a0;
+ (long long)streamTokenFromClientContext:(id)a0;

- (void)dealloc;
- (void)removeContext:(id)a0;
- (id)newContext;
- (id)initWithStreamToken:(long long)a0 messenger:(id)a1;

@end
