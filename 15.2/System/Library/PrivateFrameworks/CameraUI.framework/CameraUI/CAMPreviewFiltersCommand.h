@class NSArray;

@interface CAMPreviewFiltersCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSArray *filters;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFilters:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubcommands:(id)a0;

@end
