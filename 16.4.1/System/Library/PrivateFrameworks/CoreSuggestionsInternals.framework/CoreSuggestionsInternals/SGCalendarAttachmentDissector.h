@class NSString, SGAccountsAdapter;

@interface SGCalendarAttachmentDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    SGAccountsAdapter *_accountsAdapter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)replaceTzid:(id)a0 inDocument:(id)a1 fromOriginal:(id)a2 withBaseLength:(unsigned long long)a3 withEventRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
+ (id)splitAttachment:(id)a0 intoEvents:(id)a1 withTimezones:(id)a2;
+ (id)baseAttachmentFrom:(id)a0 includingEvents:(id)a1 withRanges:(id)a2;

- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)_dissectMessage:(id)a0 entity:(id)a1;
- (BOOL)shouldIgnoreEntity:(id)a0;
- (id)downloadedCalendarAttachmentsFrom:(id)a0;
- (BOOL)hasCalendarAccountForOneOf:(id)a0;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (id)enrichmentsFromData:(id)a0 inDocument:(id)a1 parentMessage:(id)a2 parentEntity:(id)a3;
- (BOOL)isRequestFromSharedCalendarProvider:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (struct SGMEventICSSourceType_ { unsigned long long x0; })accountTypeFor:(id)a0;

@end
