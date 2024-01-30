@class TCMessageEntry;

@interface TCMessageException : NSException {
    TCMessageEntry *m_entry;
}

+ (void)initialize;
+ (void)raise:(id)a0;
+ (id)exceptionWithMessage:(id)a0;
+ (id)exceptionWithUntaggedMessage:(id)a0;
+ (void)raiseUntaggedMessage:(id)a0;
+ (id)nsError:(id)a0 domain:(id)a1;

- (id)initWithMessage:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)getEntry;
- (id)initWithUntaggedMessage:(id)a0;

@end
