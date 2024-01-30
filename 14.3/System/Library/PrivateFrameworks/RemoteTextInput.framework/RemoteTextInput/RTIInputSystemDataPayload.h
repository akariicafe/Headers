@class RTIDocumentState, NSUUID, RTIDocumentTraits, RTITextOperations;

@interface RTIInputSystemDataPayload : RTIDataPayload <NSSecureCoding> {
    BOOL _disableUpdate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (retain, nonatomic) RTIDocumentState *documentState;
@property (retain, nonatomic) RTITextOperations *textOperations;
@property (retain, nonatomic) NSUUID *sessionUUID;

+ (id)payloadWithData:(id)a0;
+ (id)payloadWithData:(id)a0 version:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)data;
- (id)initWithCoder:(id)a0;
- (void)updateData;
- (void)_unarchiveData;

@end
