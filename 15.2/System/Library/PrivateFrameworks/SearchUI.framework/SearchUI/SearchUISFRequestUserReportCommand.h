@class SFRequestUserReportCommand;

@interface SearchUISFRequestUserReportCommand : SearchUITapCommand

@property (readonly, nonatomic) SFRequestUserReportCommand *command;

+ (id)commandForRowModel:(id)a0 environment:(id)a1;
+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;

- (id)userReportRequest;
- (id)setupViewController;
- (BOOL)prefersModalPresentation;

@end
