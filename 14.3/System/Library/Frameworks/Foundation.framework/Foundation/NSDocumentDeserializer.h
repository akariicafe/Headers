@interface NSDocumentDeserializer : NSAKDeserializer

- (void)fixupDirInfo:(id)a0;
- (id)deserializeNewPList;
- (id)deserializeNewData;

@end
