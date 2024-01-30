@class NSString, NSMutableString;

@interface WMFieldMapper : WMParagraphMapper {
    int mMode;
    unsigned int mType;
    NSMutableString *mMarkerText;
    NSString *mLink;
}

- (void).cxx_destruct;
- (id)initWithWDFieldMarker:(id)a0 parent:(id)a1;
- (void)mapFieldMarkerAt:(id)a0 marker:(id)a1 withState:(id)a2;
- (void)mapRunAt:(id)a0 run:(id)a1 withState:(id)a2;

@end
