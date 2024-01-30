@interface ICAirDropDocument : NSObject <ICAirDropDocument> {
    struct Document { void /* function */ **_vptr$MessageLite; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _unknown_fields_; unsigned int _has_bits_[1]; int _cached_size_; struct NoteDocument *notedocument_; struct LegacyNoteDocument *legacynotedocument_; } _document;
}

@property (readonly, nonatomic) BOOL hasDocumentForNote;
@property (readonly, nonatomic) BOOL hasDocumentForLegacyNote;
@property (readonly, nonatomic) id activityItem;

+ (id)documentAtURL:(id)a0;
+ (BOOL)canAirDropImportIntoAccount:(id)a0 context:(id)a1;
+ (id)legacyNoteAirDropDocumentWithData:(id)a0;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (void *)document;
- (id).cxx_construct;
- (id)dataFromLegacyNoteDocument;

@end
