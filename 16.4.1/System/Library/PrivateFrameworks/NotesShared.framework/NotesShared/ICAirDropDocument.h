@interface ICAirDropDocument : NSObject <ICAirDropDocument> {
    struct Document { void /* function */ **_vptr$MessageLite; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _unknown_fields_; unsigned int _has_bits_[1]; int _cached_size_; struct NoteDocument *notedocument_; struct LegacyNoteDocument *legacynotedocument_; } _document;
}

@property (readonly, nonatomic) BOOL hasDocumentForNote;
@property (readonly, nonatomic) BOOL hasDocumentForLegacyNote;
@property (readonly, nonatomic) id activityItem;

+ (BOOL)canAirDropImportIntoAccount:(id)a0 context:(id)a1;
+ (id)legacyNoteAirDropDocumentWithData:(id)a0;
+ (id)documentAtURL:(id)a0;

- (id)initWithData:(id)a0;
- (void *)document;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataFromLegacyNoteDocument;

@end
