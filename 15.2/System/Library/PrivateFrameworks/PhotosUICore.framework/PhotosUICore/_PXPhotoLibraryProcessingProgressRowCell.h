@class NSString, UIImage;

@interface _PXPhotoLibraryProcessingProgressRowCell : PTUIRowTableViewCell {
    BOOL _hasRequestedBriefDescription;
}

@property (retain, nonatomic) NSString *briefTitle;
@property (retain, nonatomic) UIImage *briefImage;

- (void).cxx_destruct;
- (void)updateDisplayedContent;
- (void)_handleBriefDescriptionResultsWithTitle:(id)a0 image:(id)a1;

@end
