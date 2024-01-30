@interface LPPartitionMedia : LPMedia

+ (id)primaryMedia;
+ (id)contentTypesForPartitionMedia;
+ (id)supportedContentTypes;

- (BOOL)isPrimaryMedia;
- (id)children;

@end
