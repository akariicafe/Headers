@class ICNoteTimelineSectionIdentifier, NSArray;

@interface ICNoteTimelineSection : NSObject

@property (retain, nonatomic) ICNoteTimelineSectionIdentifier *identifier;
@property (retain, nonatomic) NSArray *objectIDs;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 objectIDs:(id)a1;

@end
