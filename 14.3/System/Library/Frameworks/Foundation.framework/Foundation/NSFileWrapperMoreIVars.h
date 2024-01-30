@class NSDictionary, NSURL, NSError, NSHashTable;

@interface NSFileWrapperMoreIVars : NSObject {
    NSURL *contentsURL;
    BOOL contentsMustBeReadWithoutMapping;
    BOOL attributesMustBeWrittenSoNoHardLinking;
    NSHashTable *parents;
    NSError *contentsLazyReadingError;
    NSDictionary *cachedDirectoryChildrenAsDictionary;
}

@end
