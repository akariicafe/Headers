@interface CUIKEventDescriptionGenerator : CUIKDescriptionGenerator

+ (id)sharedGenerator;

- (id)textRepresentationForEvent:(id)a0 withTextFormat:(int)a1 showURI:(BOOL)a2;
- (id)dateStringRepresentationForEvent:(id)a0;
- (id)_showEventURLStringForEvent:(id)a0;
- (id)textRepresentationForAttendee:(id)a0 includeEmailAddress:(BOOL)a1;

@end
