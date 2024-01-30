@interface IMMessageAcknowledgmentStringHelper : NSObject

+ (BOOL)shouldQuoteContentString:(id)a0;
+ (id)longContentTypeStringForPluginBundleID:(id)a0 pluginDisplayName:(id)a1;
+ (id)messageAcknowledgmentString:(long long)a0 lowercase:(BOOL)a1;
+ (id)longContentTypeStringForContentType:(id)a0;
+ (id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)a0 messageSummaryInfo:(id)a1;
+ (id)generatePreviewStringForMessageAcknowledgmentType:(long long)a0 acknowledgmentDisplayName:(id)a1 isFromMe:(BOOL)a2 messageSummaryInfo:(id)a3;
+ (id)generateFormatStringForMessageAcknowledgmentType:(long long)a0 acknowledgmentDisplayName:(id)a1 isFromMe:(BOOL)a2 messageSummaryInfo:(id)a3 format:(long long *)a4;
+ (id)generateBackwardCompatibilityFormatStringForMessageAcknowledgmentType:(long long)a0 messageSummaryInfo:(id)a1 format:(long long *)a2;
+ (id)generatePreviewStringForMessageAcknowledgmentType:(long long)a0 acknowledgmentDisplayName:(id)a1 isFromMe:(BOOL)a2 messageSummaryInfo:(id)a3 isGroupMessage:(BOOL)a4;
+ (id)generateBackwardCompatibilityStringForMessageAcknowledgmentType:(long long)a0 messageSummaryInfo:(id)a1 isGroupMessage:(BOOL)a2;

@end
