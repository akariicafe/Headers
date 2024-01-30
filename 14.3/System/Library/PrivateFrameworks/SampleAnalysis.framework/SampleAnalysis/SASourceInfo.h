@class NSString;

@interface SASourceInfo : NSObject {
    unsigned long long _offsetIntoSegment;
}

@property (readonly) unsigned long long offsetIntoSegment;
@property (readonly) unsigned long long length;
@property (readonly) NSString *filePath;
@property (readonly) NSString *fileName;
@property (readonly) unsigned int lineNum;
@property (readonly) unsigned int columnNum;
@property (readonly) unsigned long long offsetIntoTextSegment;

- (void).cxx_destruct;
- (id)debugDescription;

@end
