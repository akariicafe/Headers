@interface LPAPFSPhysicalStore : LPMedia

+ (id)supportedContentTypes;

- (id)container;
- (int)role;
- (id)parent;

@end
