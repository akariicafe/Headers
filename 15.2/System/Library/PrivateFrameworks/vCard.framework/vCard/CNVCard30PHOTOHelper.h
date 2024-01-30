@class CNVCardWritingOptions;
@protocol CNVCardPerson;

@interface CNVCard30PHOTOHelper : NSObject

@property (readonly, nonatomic) id<CNVCardPerson> person;
@property (readonly, nonatomic) CNVCardWritingOptions *options;
@property (readonly, nonatomic) unsigned long long maxBytes;

+ (id)log;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)image;
- (id)largeImage;
- (id)initWithPerson:(id)a0 options:(id)a1 maximumDataLength:(unsigned long long)a2;
- (id)bestEffortImage;
- (id)scaleImage:(id)a0 toFitSizes:(id)a1 allowableCompressionQuality:(id)a2;
- (void)logBestEfforImageIfNonNil:(id)a0;
- (id)compressImage:(id)a0 allowableCompressions:(id)a1;
- (id)scaleImage:(id)a0 toFit:(struct CGSize { double x0; double x1; })a1 allowableCompressionQuality:(id)a2;

@end
