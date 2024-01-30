@class NSString, NSArray;

@interface MFIMAPOperation : NSObject {
    unsigned char _type : 3;
    unsigned char _failureCount : 4;
    unsigned char _temporaryUids : 1;
    NSString *_mailboxName;
    union { struct { NSArray *trueFlags; NSArray *falseFlags; struct __CFArray *uids; } store; struct { unsigned int uid; NSArray *flags; int internalDate; unsigned int size; } append; struct { struct __CFArray *srcUids; struct __CFArray *dstUids; NSString *destinationMailbox; } copy; } _opSpecific;
}

+ (id)deserializedCopyFromData:(id)a0 cursor:(unsigned long long *)a1;

- (unsigned char)_magic;
- (unsigned int)uid;
- (id)uids;
- (int)operationType;
- (id)description;
- (void)setFailureCount:(unsigned int)a0;
- (id)flags;
- (unsigned int)failureCount;
- (void)dealloc;
- (unsigned int)approximateSize;
- (BOOL)isValid;
- (id)mailboxName;
- (id)flagsToSet;
- (BOOL)usesRealUids;
- (id)flagsToClear;
- (id)initWithFlagsToSet:(id)a0 flagsToClear:(id)a1 forUIDs:(id)a2 inMailbox:(id)a3;
- (void)setUsesRealUids:(BOOL)a0;
- (id)initWithMailboxToCreate:(id)a0;
- (id)initWithMailboxToDelete:(id)a0;
- (unsigned int)firstTemporaryUid;
- (id)initWithAppendedUid:(unsigned int)a0 approximateSize:(unsigned int)a1 flags:(id)a2 internalDate:(id)a3 mailbox:(id)a4;
- (BOOL)isSourceOfTemporaryUid:(unsigned int)a0;
- (BOOL)actsOnTemporaryUid:(unsigned int)a0;
- (void)expungeTemporaryUid:(unsigned int)a0;
- (unsigned int)lastTemporaryUid;
- (id)initWithUidsToCopy:(id)a0 fromMailbox:(id)a1 toMailbox:(id)a2 firstNewUid:(unsigned int)a3;
- (void)serializeIntoData:(id)a0;
- (id)internalDate;
- (id)_deserializeOpSpecificValuesFromData:(id)a0 cursor:(unsigned long long *)a1;
- (id)initWithType:(int)a0 mailbox:(id)a1;
- (id)sourceUids;
- (id)destinationUids;
- (id)destinationMailbox;
- (unsigned int)sourceUidForTemporaryUid:(unsigned int)a0;
- (BOOL)getMessageId:(id *)a0 andInternalDate:(id *)a1 forDestinationUid:(unsigned int)a2;
- (void)setMessageId:(id)a0 andInternalDate:(id)a1 forMessageWithSourceUid:(unsigned int)a2;

@end
