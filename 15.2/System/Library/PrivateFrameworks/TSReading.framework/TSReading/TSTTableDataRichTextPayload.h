@class TSTRichTextPayload;

@interface TSTTableDataRichTextPayload : TSTTableDataObject {
    TSTRichTextPayload *mPayload;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initObjectWithRichTextPayload:(id)a0;

@end
