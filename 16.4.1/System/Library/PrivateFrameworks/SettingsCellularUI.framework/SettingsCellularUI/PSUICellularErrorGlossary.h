@interface PSUICellularErrorGlossary : NSObject

+ (id)sharedInstance;

- (id)getLogger;
- (id)initPrivate;
- (id)init;
- (id)messageForError:(id)a0;

@end
