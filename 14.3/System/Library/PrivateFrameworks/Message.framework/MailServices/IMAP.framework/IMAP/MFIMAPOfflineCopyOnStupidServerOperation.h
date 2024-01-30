@interface MFIMAPOfflineCopyOnStupidServerOperation : MFIMAPOperation {
    struct __CFArray { } *messageIds;
    struct __CFArray { } *internalDates;
}

- (unsigned char)_magic;
- (void)dealloc;
- (unsigned int)approximateSize;
- (void)expungeTemporaryUid:(unsigned int)a0;
- (void)serializeIntoData:(id)a0;
- (id)_deserializeOpSpecificValuesFromData:(id)a0 cursor:(unsigned long long *)a1;
- (BOOL)getMessageId:(id *)a0 andInternalDate:(id *)a1 forDestinationUid:(unsigned int)a2;
- (void)setMessageId:(id)a0 andInternalDate:(id)a1 forMessageWithSourceUid:(unsigned int)a2;

@end
