@class NSMutableSet;

@interface PKReusablePassViewQueue : NSObject {
    NSMutableSet *_passViews;
}

- (void).cxx_destruct;
- (id)initWithCount:(unsigned long long)a0;
- (id)dequeueReusablePassView;
- (void)enqueueReusablePassView:(id)a0;

@end
