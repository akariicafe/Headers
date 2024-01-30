@class NSString;

@interface ICLegacyNoteStringActivityItemSource : ICNoteBaseActivityItemSource <UIActivityItemSource>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *plainText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
