@class OADDrawable;

@interface WDStory : NSObject {
    OADDrawable *mHead;
    BOOL mOle;
}

- (void).cxx_destruct;
- (id)text;
- (BOOL)isOle;
- (id)head;
- (void)setOle:(BOOL)a0;
- (id)initWithHead:(id)a0;

@end
