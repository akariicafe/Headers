@interface PSUICellularErrorGlossary : NSObject

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (id)messageForError:(id)a0;

@end
