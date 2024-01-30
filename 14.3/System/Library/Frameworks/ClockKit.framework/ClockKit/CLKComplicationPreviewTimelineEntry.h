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

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)finalize;
- (void)encodeWithCoder:(id)a0;

@end
