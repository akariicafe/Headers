@interface NSPathStore2 : NSString {
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathStoreWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
+ (id)pathWithComponents:(id)a0;

- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)length;
- (id)stringByExpandingTildeInPath;
- (id)stringByResolvingSymlinksInPath;
- (id)pathComponents;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringByDeletingPathExtension;
- (id)stringByDeletingLastPathComponent;
- (id)pathExtension;
- (BOOL)isAbsolutePath;
- (id)copy;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)hash;
- (id)_stringByStandardizingPathUsingCache:(BOOL)a0;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)a0;
- (const unsigned short *)_fastCharacterContents;
- (id)lastPathComponent;
- (id)stringByStandardizingPath;
- (id)stringByAppendingPathExtension:(id)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)stringByAppendingPathComponent:(id)a0;

@end
