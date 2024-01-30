@interface LPPartitionMedia : LPMedia

+ (id)supportedContentTypes;
+ (id)primaryMedia;
+ (id)contentTypesForPartitionMedia;

- (id)children;
- (BOOL)isPrimaryMedia;

@end
