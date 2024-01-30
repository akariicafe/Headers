@interface ICASFolderLabelType : NSObject <AADataType>

@property (readonly, nonatomic) long long folderLabelType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithFolderLabelType:(long long)a0;

@end
