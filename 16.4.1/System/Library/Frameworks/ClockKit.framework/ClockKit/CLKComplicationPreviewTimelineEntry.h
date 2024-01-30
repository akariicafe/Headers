@class NSArray, NSString, NSDate;

@interface CLKComplicationPreviewTimelineEntry : CLKComplicationTimelineEntry <TLPreviewTimelineEntry>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long previewFaceColor;
@property (copy, nonatomic) NSArray *errors;
@property (copy, nonatomic) NSArray *selectableRegions;
@property (readonly, nonatomic) NSArray *tl_errors;
@property (readonly, nonatomic) NSArray *tl_selectableRegions;
@property (retain, nonatomic, setter=tl_setEntryDate:) NSDate *tl_entryDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)finalize;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
