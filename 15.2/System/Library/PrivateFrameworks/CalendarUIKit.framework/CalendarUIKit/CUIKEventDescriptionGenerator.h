@interface CUIKEventDescriptionGenerator : CUIKDescriptionGenerator

+ (id)sharedGenerator;

- (id)dateStringRepresentationForEvent:(id)a0;
- (id)virtualConferenceHTMLRepresentation:(id)a0;
- (id)textRepresentationForEvent:(id)a0 withTextFormat:(int)a1 showURI:(BOOL)a2;
- (BOOL)_virtualConferenceUsesShortRepresentation:(id)a0;
- (id)_showEventURLStringForEvent:(id)a0;
- (id)_htmlStringWithURL:(id)a0 title:(id)a1;
- (id)_textRepresentationForAttendee:(id)a0 includeEmailAddress:(BOOL)a1;
- (id)_attributedStringWithURL:(id)a0 title:(id)a1;

@end
