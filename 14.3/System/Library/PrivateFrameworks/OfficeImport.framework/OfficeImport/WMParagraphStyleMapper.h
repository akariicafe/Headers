@class WDParagraph, WMParagraphStyle, WDParagraphProperties;

@interface WMParagraphStyleMapper : CMMapper {
    WDParagraphProperties *wdParaProperties;
    WDParagraph *wdParagraph;
    WMParagraphStyle *mStyle;
}

- (void).cxx_destruct;
- (BOOL)isListItem;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)initWithWDParagraph:(id)a0 parent:(id)a1 isInTextFrame:(BOOL)a2;
- (void)mapListStyleFromParagraphStyleWithState:(id)a0;
- (void)mapParagraphStyle;
- (void)mapListStyleAt:(id)a0 state:(id)a1;
- (void)mapParagraphProperties;
- (void)destyleEmptyParagraph;
- (BOOL)getListLevel:(char *)a0 andListIndex:(int *)a1 fromStyleOnly:(BOOL)a2;
- (BOOL)checkListId:(long long)a0 level:(unsigned char)a1;
- (void)updateOutlineStateWithListId:(int)a0 listLevel:(unsigned char)a1 document:(id)a2 state:(id)a3;
- (void)mapBulletAt:(id)a0 forIndex:(int)a1 inLevelDescription:(id)a2 listState:(id)a3;
- (void)getListLevel:(char *)a0 andListIndex:(int *)a1 foundListLevel:(BOOL *)a2 foundListIndex:(BOOL *)a3 fromStyle:(id)a4;
- (void)getListLevel:(char *)a0 andListIndex:(int *)a1 foundListLevel:(BOOL *)a2 foundListIndex:(BOOL *)a3 fromParagraphProperties:(id)a4;
- (void)mapStyleFromListId:(int)a0 listLevel:(unsigned char)a1 document:(id)a2 state:(id)a3;
- (void)mapBulletFromListId:(int)a0 listLevel:(unsigned char)a1 at:(id)a2 document:(id)a3 state:(id)a4;
- (id)bulletLabelForIndex:(int)a0 inLevelDescription:(id)a1 listState:(id)a2;
- (id)labelStringWithGap:(id)a0;

@end
