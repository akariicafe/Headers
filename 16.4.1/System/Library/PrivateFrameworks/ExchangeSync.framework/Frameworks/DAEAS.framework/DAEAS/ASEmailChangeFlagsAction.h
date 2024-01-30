@interface ASEmailChangeFlagsAction : DAAction

@property (nonatomic) BOOL read;
@property (nonatomic) BOOL flagged;
@property (nonatomic) unsigned long long changedFlags;

- (void)appendApplicationDataForTask:(id)a0 toWBXMLData:(id)a1;
- (id)initWithServerID:(id)a0 read:(BOOL)a1 flagged:(BOOL)a2 changedFlags:(unsigned long long)a3;

@end
