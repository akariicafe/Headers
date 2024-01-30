@class NSString, NoteObject, NSData;

@interface NoteBodyObject : NSManagedObject <ICSearchIndexableTarget>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *content;
@property (readonly, nonatomic) NSString *contentAsPlainText;
@property (retain, nonatomic) NoteObject *owner;
@property (retain, nonatomic) NSData *externalRepresentation;
@property (retain, nonatomic) NSString *externalContentRef;

- (id)contentAsPlainTextPreservingNewlines;
- (id)targetSearchIndexable;

@end
