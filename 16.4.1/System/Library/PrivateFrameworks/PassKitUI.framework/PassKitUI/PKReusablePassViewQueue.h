@class NSMutableSet;

@interface PKReusablePassViewQueue : NSObject {
    NSMutableSet *_passViews;
}

- (id)initWithCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)dequeueReusablePassView;
- (void)enqueueReusablePassView:(id)a0;

@end
