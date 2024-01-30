@interface APOdmlEspressoFormatter : NSObject

- (id)_attachmentURLWithName:(id)a0 fileName:(id)a1;
- (id)_parseRecordData:(id)a0 isCounterfactual:(id)a1;
- (void)printDESRecordInSegments:(id)a0;
- (id)_featuresFromDESRecord:(id)a0 isCounterfactual:(id)a1;
- (id)formatRecipe:(id)a0 multipleRecordInfo:(id)a1 multipleRecordData:(id)a2 attachments:(id)a3 error:(id *)a4;

@end
