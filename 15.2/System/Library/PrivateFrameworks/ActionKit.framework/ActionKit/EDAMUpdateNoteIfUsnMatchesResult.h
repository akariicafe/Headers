@class NSNumber, EDAMNote;

@interface EDAMUpdateNoteIfUsnMatchesResult : FATObject

@property (retain, nonatomic) EDAMNote *note;
@property (retain, nonatomic) NSNumber *updated;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
