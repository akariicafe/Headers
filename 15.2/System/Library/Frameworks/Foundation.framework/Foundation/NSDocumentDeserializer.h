@interface NSDocumentDeserializer : NSAKDeserializer

- (void)fixupDirInfo:(id)a0;
- (id)deserializeNewData;
- (id)deserializeNewPList;

@end
