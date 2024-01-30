@class WDText;

@interface WMSectionContentMapper : CMMapper {
    WDText *wdText;
}

- (void).cxx_destruct;
- (id)paragraphAtIndex:(unsigned long long)a0;
- (id)initWithWDText:(id)a0 parent:(id)a1;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapTextFrameAt:(id)a0 withState:(id)a1;
- (void)mapTextFrameStyleTo:(id)a0 withState:(id)a1;
- (void)updateTextFrameState:(id)a0 atIndex:(unsigned long long)a1;

@end
