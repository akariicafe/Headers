@interface SFShareSheetRendering : NSObject

+ (id)badgeNumberFormatterFromConfig:(id)a0;
+ (id)cappedOrthoLabelFontFromConfig:(id)a0;
+ (BOOL)isAXFromConfig:(id)a0;
+ (id)cappedOrthoLabelFontTextStyle;
+ (struct CGImage { } *)createCGImageForRenderingCommand:(id)a0;
+ (id)drawingCommandsForActionPlatterWithTitle:(id)a0 tintColor:(id)a1 hostConfig:(id)a2;
+ (id)drawingCommandsForMoreListEntryTitle:(id)a0 labelColor:(id)a1 hostConfig:(id)a2;
+ (id)drawingCommandsForNameLabelWithString:(id)a0 textColor:(id)a1 maxNumberOfLines:(unsigned long long)a2 isAirDrop:(BOOL)a3 ignoreNameWrapping:(BOOL)a4 hostConfig:(id)a5;
+ (id)drawingCommandsForNearbyBadgeWithCount:(long long)a0 hostConfig:(id)a1;
+ (id)drawingCommandsForUIActivityTitle:(id)a0 foregroundColor:(id)a1 hostConfig:(id)a2;
+ (long long)hostNaturalTextAlignmentFromConfig:(id)a0;
+ (double)morePlatterMaxWidthFromConfig:(id)a0;
+ (struct CGSize { double x0; double x1; })nameLabelSizeFromConfig:(id)a0;
+ (double)platterMaxWidthFromConfig:(id)a0;

@end
