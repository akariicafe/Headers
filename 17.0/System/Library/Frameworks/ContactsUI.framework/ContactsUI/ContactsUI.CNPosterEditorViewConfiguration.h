@interface ContactsUI.CNPosterEditorViewConfiguration : NSObject {
    void /* unknown type, empty encoding */ imageData;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ contactIdentifier;
    void /* unknown type, empty encoding */ isMe;
    void /* unknown type, empty encoding */ posterArchiveData;
    void /* unknown type, empty encoding */ posterConfiguration;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithImageData:(id)a0 displayName:(id)a1;
- (id)initWithImageData:(id)a0 displayName:(id)a1 contactIdentifier:(id)a2 isMe:(BOOL)a3;
- (id)initWithPosterArchiveData:(id)a0 displayName:(id)a1;
- (id)initWithPosterArchiveData:(id)a0 displayName:(id)a1 contactIdentifier:(id)a2 isMe:(BOOL)a3;
- (id)initWithPosterArchiveData:(id)a0 imageData:(id)a1 displayName:(id)a2;
- (id)initWithPosterConfiguration:(id)a0 displayName:(id)a1;

@end
