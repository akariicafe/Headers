@class TSTRichTextPayload;

@interface TSTTableDataRichTextPayload : TSTTableDataObject {
    TSTRichTextPayload *mPayload;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithRichTextPayload:(id)a0;

@end
