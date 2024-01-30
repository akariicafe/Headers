@interface ASDraftEmailAction : DAAction

@property (nonatomic) BOOL send;

- (id)initWithItemChangeType:(unsigned long long)a0 changedItem:(id)a1 send:(BOOL)a2;
- (void)appendApplicationDataForTask:(id)a0 toWBXMLData:(id)a1;

@end
