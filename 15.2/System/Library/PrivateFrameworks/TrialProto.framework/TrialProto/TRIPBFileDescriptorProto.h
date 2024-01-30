@class TRIPBSourceCodeInfo, NSString, TRIPBInt32Array, NSMutableArray, TRIPBFileOptions;

@interface TRIPBFileDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *package;
@property (nonatomic) BOOL hasPackage;
@property (retain, nonatomic) NSMutableArray *dependencyArray;
@property (readonly, nonatomic) unsigned long long dependencyArray_Count;
@property (retain, nonatomic) TRIPBInt32Array *publicDependencyArray;
@property (readonly, nonatomic) unsigned long long publicDependencyArray_Count;
@property (retain, nonatomic) TRIPBInt32Array *weakDependencyArray;
@property (readonly, nonatomic) unsigned long long weakDependencyArray_Count;
@property (retain, nonatomic) NSMutableArray *messageTypeArray;
@property (readonly, nonatomic) unsigned long long messageTypeArray_Count;
@property (retain, nonatomic) NSMutableArray *enumTypeArray;
@property (readonly, nonatomic) unsigned long long enumTypeArray_Count;
@property (retain, nonatomic) NSMutableArray *serviceArray;
@property (readonly, nonatomic) unsigned long long serviceArray_Count;
@property (retain, nonatomic) NSMutableArray *extensionArray;
@property (readonly, nonatomic) unsigned long long extensionArray_Count;
@property (retain, nonatomic) TRIPBFileOptions *options;
@property (nonatomic) BOOL hasOptions;
@property (retain, nonatomic) TRIPBSourceCodeInfo *sourceCodeInfo;
@property (nonatomic) BOOL hasSourceCodeInfo;
@property (copy, nonatomic) NSString *syntax;
@property (nonatomic) BOOL hasSyntax;

+ (id)descriptor;

@end
