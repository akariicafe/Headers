@class SFSearchWebCommand;

@interface SearchUISFSearchWebCommand : SearchUISFOpenPunchoutCommand

@property (readonly, nonatomic) SFSearchWebCommand *command;

+ (id)urlFromQuery:(id)a0;

- (id)punchout;

@end
