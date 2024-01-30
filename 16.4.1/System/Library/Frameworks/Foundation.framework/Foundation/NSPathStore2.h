@interface NSPathStore2 : NSString {
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathWithComponents:(id)a0;
+ (id)pathStoreWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;

- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)stringByDeletingLastPathComponent;
- (id)stringByAppendingPathExtension:(id)a0;
- (id)stringByStandardizingPath;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringByResolvingSymlinksInPath;
- (id)pathExtension;
- (id)lastPathComponent;
- (id)pathComponents;
- (id)stringByAppendingPathComponent:(id)a0;
- (unsigned long long)hash;
- (id)stringByDeletingPathExtension;
- (id)copy;
- (BOOL)isAbsolutePath;
- (id)stringByExpandingTildeInPath;
- (id)_stringByStandardizingPathUsingCache:(BOOL)a0;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)a0;
- (const unsigned short *)_fastCharacterContents;
- (id)stringByAbbreviatingWithTildeInPath;

@end
