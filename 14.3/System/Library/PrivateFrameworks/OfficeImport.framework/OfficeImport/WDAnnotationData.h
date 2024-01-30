@class WDText, NSString, NSDate;

@interface WDAnnotationData : NSObject {
    WDText *mText;
    NSDate *mDate;
    NSString *mOwner;
}

- (void).cxx_destruct;
- (id)owner;
- (id)text;
- (id)date;
- (void)setOwner:(id)a0;
- (id)initWithText:(id)a0;
- (void)setDate:(id)a0;

@end
